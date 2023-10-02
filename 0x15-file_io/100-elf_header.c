#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>
#include <elf.h>
#include <sys/types.h>

/**
 * print_error_and_exit - Print an error message and exit with code 98.
 *
 * @error_message: The error message to display.
 * @filename: The name of the file related to the error.
 */
void print_error_and_exit(const char *error_message, const char *filename)
{
fprintf(stderr, "Error: %s: %s\n", error_message, filename);
_exit(98);
}

/**
 * display_elf_header_info - Display information from the ELF header.
 *
 * @header: Pointer to the ELF header structure.
 */
void display_elf_header_info(Elf64_Ehdr *header)
{
int i;
printf("Magic: ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", header->e_ident[i]);

printf("\nClass:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
printf("Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2MSB ? "big-endian" : "little-endian");
printf("Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
printf("OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
printf("Type:                              0x%x\n", header->e_type);
printf("Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * main - Entry point for displaying ELF header information.
 *
 * @argc: The number of arguments provided to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success
 * Description: If file is not ELF File or if function fails
 * - exit code 98
 */
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;
ssize_t read_bytes;

if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
return (98);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
print_error_and_exit("Cannot open file", argv[1]);

read_bytes = read(fd, &header, sizeof(Elf64_Ehdr));
if (read_bytes != sizeof(Elf64_Ehdr))
print_error_and_exit("Cannot read ELF header", argv[1]);

if (header.e_ident[EI_MAG0] != ELFMAG0 ||
header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 ||
header.e_ident[EI_MAG3] != ELFMAG3) {
fprintf(stderr, "Error: Not an ELF file: %s\n", argv[1]);
close(fd);
return (98);
}

display_elf_header_info(&header);

close(fd);
return (0);
}

#include <stdio.h>

int main()
{
	char x = 5;
	int y = 6;
	long z = 7;

	printf("Char x: %p (hex)\n", &x);
	printf("Char x: %lu (deci)\n\n", &x);

	printf("Int y: %p (hex)\n", &y);
	printf("Int y: %lu (deci)\n\n", &y);

	printf("Long z: %p (hex)\n", &z);
	printf("Long z: %lu (deci)\n\n", &z);

	char *xp = &x;
	printf("Pointer xp: %p\n", xp);
	int *yp = &y;
	printf("Pointer yp: %p\n", yp);
	long *zp = &z;
	printf("Pointer zp: %p\n\n", zp);

	printf("x: %d\n", x);
	*xp = 10;
	printf("x: %d\n\n", x);

	printf("y: %d\n", y);
	*yp = 12;
	printf("y: %d\n\n", y);

	printf("z: %d\n", z);
	*zp = 14;
	printf("z: %d\n\n", z);

	unsigned int f = 5;
	int *fp = &f;
	char *fd = &f;
	printf("int - p: %p p points to: %d\n", fp, *fp);
	printf("char - d: %p d points to: %d\n\n", fd, *fd);

	printf("unsigned int f: %x\n", f);
	printf("unsigned int f: %u\n\n", f);

	printf("byte 1: %hhu\n", *fd);
	fd++;
	printf("byte 2: %hhu\n", *fd);
	fd++;
	printf("byte 3: %hhu\n", *fd);
	fd++;
	printf("byte 4: %hhu\n\n", *fd);

	printf("Bytes Incrementing:\n\n");
	printf("unsigned int f: %x\n", f);
	printf("unsigned int f: %u\n\n", f);
	fd = &f;
	*fd += 1;
	printf("unsigned int f: %x\n", f);
	printf("unsigned int f: %u\n\n", f);
	fd++;
	*fd += 1;
	printf("unsigned int f: %x\n", f);
	printf("unsigned int f: %u\n\n", f);
	fd++;
	*fd += 1;
	printf("unsigned int f: %x\n", f);
	printf("unsigned int f: %u\n\n", f);
	fd++;
	*fd += 1;
	printf("unsigned int f: %x\n", f);
	printf("unsigned int f: %u\n\n", f);

	printf("Bytes Incremented:\n\n");
	printf("byte 1: %hhu\n", *fd);
	fd++;
	printf("byte 2: %hhu\n", *fd);
	fd++;
	printf("byte 3: %hhu\n", *fd);
	fd++;
	printf("byte 4: %hhu\n\n", *fd);

	f = 5;
	printf("Now with +16:\n\n");
	printf("Bytes Incrementing:\n\n");
	printf("unsigned int f: %x\n", f);
	printf("unsigned int f: %u\n\n", f);
	fd = &f;
	*fd += 16;
	printf("unsigned int f: %x\n", f);
	printf("unsigned int f: %u\n\n", f);
	fd++;
	*fd += 16;
	printf("unsigned int f: %x\n", f);
	printf("unsigned int f: %u\n\n", f);
	fd++;
	*fd += 16;
	printf("unsigned int f: %x\n", f);
	printf("unsigned int f: %u\n\n", f);
	fd++;
	*fd += 16;
	printf("unsigned int f: %x\n", f);
	printf("unsigned int f: %u\n\n", f);

	printf("Bytes Incremented:\n\n");
	printf("byte 1: %hhu\n", *fd);
	fd++;
	printf("byte 2: %hhu\n", *fd);
	fd++;
	printf("byte 3: %hhu\n", *fd);
	fd++;
	printf("byte 4: %hhu\n\n", *fd);
}
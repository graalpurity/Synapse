void putchar(char c);
void print(const char* s);

char* booted = "Successfully booted into Synapse from Floppy Drive: A";
char* welcome = "Welcome to Synapse";

//main function for the kernel
void main(void) { 
	print(booted);
	print("\n");
	print(welcome);
	while(1==1) {}
}

void print(const char* s) {
	while(*s != 0) {
		putchar(*s);
		s++;
	}
}

//bios interrupt
void putchar(char c) {
	__asm {
		mov ah, 0Eh
		mov al, [c]
		mov bh, 0
		mov bl, 0Fh
		int 10h
	}
}
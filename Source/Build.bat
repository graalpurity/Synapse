@ECHO OFF
echo.	** BUILDING OPERATING SYSTEM **

echo.	Cleaning.
del *.obj
del *.bin

echo.	Compiling and linking COM file.
wcl -lr -l=COM -0 -fe=KERNEL.COM kernel.c

echo.	Formatting A:
format a:

echo.	Copying Kernel to A:
copy KERNEL.COM A:\

echo.	Making A: bootable.
C:\OSDEV\Utils\mkbt.exe Boot\BOOT12.BIN A:

echo.	Done.
pause
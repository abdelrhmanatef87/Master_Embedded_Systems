#@copyright : Abdelrhman Atef Rshdan

#compiler Name
CC =arm-none-eabi-

#name of the project 
project_name =Toggle_Led_cortex_m3

#frequent options like -g debbuging information and -mcpu for the board
#-gdwarf-2 for arm
CFLAGS =-mcpu=cortex-m3 -gdwarf-2

#for includes headers or folders paths
INCS =-I .

#for libraries link it with linker
LIBS =

#all files .c 
SRC = $(wildcard *.c)

#for each file .c in SRC convert it to .o
OBJ = $(SRC:.c=.o)

#all files .s 
As = $(wildcard *.s)

#for each file .s in As convert it to .o
AsOBJ = $(As:.s=.o)

all: $(project_name).bin
	@echo "==========================  Build is Done ========================== "


# startup.o: startup.s
# 	$(CC)as.exe $(CFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe -c $(INCS) $(CFLAGS) $< -o $@

$(project_name).elf: $(AsOBJ) $(OBJ) 
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(AsOBJ) $(OBJ) -o $@ -Map=map_file.map

$(project_name).bin: $(project_name).elf
	$(CC)objcopy.exe -O binary $<  $@ 	

clean_all: 
	rm *.o *.elf *.bin	

clean:	
	rm *.elf *.bin


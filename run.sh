#/bin/bash
while true; do
    clear
    ./mips-emulator file.mips
    printf "\n\n\n\n"
    make
    sleep 1
done

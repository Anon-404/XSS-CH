#!/bin/bash
#
##########################################
#                                        #
#          presented : Anon404           #
#        Author : William Steven         #
#                                        #
##########################################
#____colors____
black='\033[1;30m'
red='\033[1;31m'
green='\033[1;32m'
yellow='\033[1;33m'
blue='\033[1;34m'
magenta='\033[1;35m'
cyan='\033[1;36m'
white='\033[1;37m'
echo -e "${yellow}[+] ${green}Checking dependencies${white}"
if ! command -v clang &> /dev/null; then
    if command -v pacman &> /dev/null; then
        if [ -f /var/lib/pacman/db.lck ]; then
            sudo rm -rf /var/lib/pacman/db.lck
        fi
        while ! sudo pacman -Syu --noconfirm clang --needed; do
            echo -e "${red}[-] Failed to install clang. Retrying...${white}"
            sleep 2
        done
    elif command -v pkg &> /dev/null; then
        pkg install clang -y
    elif command -v apt &> /dev/null; then
        sudo apt install clang -y
    elif command -v dnf &> /dev/null; then
        sudo dnf install clang -y
    else
        echo -e "${red}[-] Unknown package manager${white}"
        exit 1
    fi
else
    echo -e "${green}[+] Clang installed. Proceeding with compilation...${white}"
    sleep 2
fi
if [ -f xss-ch.c ]; then
    clang xss-ch.c -o xss-ch && chmod 777 xss-ch
    ./xss-ch
else
    echo -e "${red}[-] The file 'xss-ch' was not found or is not executable. Please check the file path and permissions.${white}"
    exit 1
fi

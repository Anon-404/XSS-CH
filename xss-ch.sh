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

echo -e "${yellow}[+] ${green}checking dependencies${white}"
if [ ! -f /usr/bin/clang ]; then

    if [ -f /usr/bin/pacman ]; then
        if [ -f /var/lib/pacman/db.lck ]; then
            sudo rm -rf /var/lib/pacman/db.lck
        fi
        while ! sudo pacman -Syu --noconfirm clang --needed; do
            echo -e "${red}[-] Failed to install clang. Retrying...${white}"
            sleep 2
        done

    elif [ -f $HOME/../usr/bin/pkg ]; then
        pkg install clang -y

    elif [ -f /usr/bin/apt ]; then
        sudo apt install clang -y

    elif [ -f /usr/bin/dnf ]; then
        sudo dnf install clang -y

    else
        echo -e "${red}[+] ${red}Unknown package manager${white}"
        exit 1
    fi

else
    echo -e "${green}[+] Clang is already installed. Proceeding with compilation...${white}"
    sleep 2
    chmod 777 xss-ch && ./xss-ch
fi

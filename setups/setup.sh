#!/bin/bash

sudo apt update
LOAD="sudo apt install"
NEXT="echo #########################################"

${LOAD} macchanger -y
${NEXT}

${LOAD} aircrack-ng -y
${NEXT}

${LOAD} nmap -y
${NEXT}

${LOAD} netdiscover -y
${NEXT}

${LOAD} dsniff -y
${NEXT}

${LOAD} tor -y
${NEXT}

${LOAD} nikto -y
${NEXT}

${LOAD} gobuster -y
${NEXT}

${LOAD} dirb -y
${NEXT}

${LOAD} hashid -y
${NEXT}

${LOAD} python3 -y
${NEXT}

${LOAD} python3-pip -y
${NEXT}


#${LOAD}
#${NEXT}

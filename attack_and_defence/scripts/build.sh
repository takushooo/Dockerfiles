#!/bin/sh

apt update
apt upgrade -y
apt install netcat -y
apt install xinetd -y
service xinetd start
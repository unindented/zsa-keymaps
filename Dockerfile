FROM debian:latest@sha256:4abf773f2a570e6873259c4e3ba16de6c6268fb571fd46ec80be7c67822823b3

RUN apt update && apt install -y git python3 python3-pip sudo

RUN python3 -m pip install appdirs keymap-drawer qmk --break-system-packages

WORKDIR /root

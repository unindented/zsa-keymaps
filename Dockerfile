FROM debian:latest@sha256:6001f38763856a0181c479eb4844467ea3dcb843335e0d8404e6b366a271c9ae

RUN apt update && apt install -y git python3 python3-pip sudo

RUN python3 -m pip install appdirs keymap-drawer qmk --break-system-packages

WORKDIR /root

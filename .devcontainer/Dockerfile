FROM debian:stable-slim

RUN apt-get update \
    && apt-get install -y git g++ gcc make gdb \
    && apt-get clean

WORKDIR /workspace
CMD [ "sleep", "infinity" ]

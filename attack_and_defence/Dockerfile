FROM debian:stretch-20170907

ENV DEBIAN_FRONTEND noninteractive

COPY scripts /opt/scripts
COPY xinetd_config /etc/xinetd.d

ENV PATH="/opt/scripts:${PATH}"
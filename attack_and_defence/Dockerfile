FROM debian:stretch-20170907

ENV DEBIAN_FRONTEND noninteractive

COPY scripts /opt/scripts
COPY xinetd_config /etc/xinetd.d
COPY flag /flag
COPY home /home
RUN chmod a+x /opt/scripts && \
    apt-get update && \
    apt-get upgrade -y && \
    apt-get install netcat -y && \
    apt-get install xinetd -y && \
    apt-get install procps -y
ENV PATH="/opt/scripts:${PATH}"

ENTRYPOINT ["/opt/scripts/startup.sh"]

WORKDIR /home
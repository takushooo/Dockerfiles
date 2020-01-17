## build
docker build -t container-name ./

docker run --name container-name -itd container-name /bin/bash

docker exec -it container-name /bin/bash

## create local flag in container
nc localhost 15021

password

flag_contents

-> /flag/flag.txt with "FLAG{flag_contents}" is generated.

## Export Dockerfile
docker save container-name -o container-name.tar

## Import Dockerfile
docker load -i container-name.tar

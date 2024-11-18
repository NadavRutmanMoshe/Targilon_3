FROM gcc:latest

RUN apt-get update && apt-get install -y cmake

COPY . /usr/src/mytest
WORKDIR /usr/src/mytest

RUN mkdir Build
WORKDIR /usr/src/mytest/Build

RUN cmake .. && make

CMD [ "./runTests" ]
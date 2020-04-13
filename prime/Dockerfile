FROM gcc:7.5.0
COPY . /usr/src/myapp
WORKDIR /usr/src/myapp
RUN g++ -o myapp main.cpp
ENTRYPOINT ["./myapp"]

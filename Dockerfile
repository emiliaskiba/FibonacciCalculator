FROM alpine:3 as build-env
RUN apk add --no-cache build-base
WORKDIR /app
COPY . . 
RUN gcc -o fibonacci fibonacci.c

FROM alpine:3 
COPY --from=build-env /app/fibonacci /app/fibonacci
WORKDIR /app
CMD ["/app/fibonacci"]
run:
	CGO_ENABLED=1 GOOS=linux GOARCH=amd64 go run ./internal/main/main.go
build:
	CGO_ENABLED=1 GOOS=linux GOARCH=amd64 go build -o cmd/airplay ./internal/main/main.go;chmod +x cmd/airplay

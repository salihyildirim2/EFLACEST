# Code may differ
GO := go
GOFLAG := 
GOFILE := foo.go
# Use this if you have module
GOEXTPACKAGE := 
.PHONY : all build clean

all : build clean

build : $(GOFILE)
	# Use this if you have module, remove if not
	$(GO) get $(GOEXTPACKAGE)
	$(GO) build $(GOFILE)

clean :
	rm -f $(GOFILE)

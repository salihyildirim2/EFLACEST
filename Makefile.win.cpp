#Project : Proje2
#Makefile created by Dev - C++ 5.11

CPP = g++.exe CC = gcc.exe WINDRES = windres.exe RES = helloworldari_private
                                                           .res OBJ = main.o $(
    RES) LINKOBJ = main.o $(RES) LIBS =
    -L"C:/Program Files/Dev-Cpp/MinGW64/x86_64-w64-mingw32/lib32" - static -
    libgcc - mwindows - m32 INCS =
        -I "C:/Program Files/Dev-Cpp/MinGW64/include" -
        I "C:/Program Files/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -
        I "C:/Program "
          "Files/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/"
          "include" CXXINCS =
            -I "C:/Program Files/Dev-Cpp/MinGW64/include" -
            I "C:/Program Files/Dev-Cpp/MinGW64/x86_64-w64-mingw32/include" -
            I "C:/Program "
              "Files/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include" -
            I "C:/Program "
              "Files/Dev-Cpp/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include/"
              "c++" BIN = helloworldari.exe CXXFLAGS =
                $(CXXINCS) - m32 CFLAGS = $(INCS) - m32 RM = rm.exe -
                                                             f

                                                                 .PHONY
    : all all - before all - after clean clean -
                                                             custom

                                                                 all
    : all -
      before $(BIN) all -
      after

          clean : clean -
                  custom ${RM} $(OBJ) $(BIN)

                      $(BIN)
    : $(OBJ) $(CPP) $(LINKOBJ) -
      o $(BIN) $(LIBS)

          main.o : main.cpp $(CPP) -
      c main.cpp -
      o main
          .o $(CXXFLAGS)

              helloworldari_private.res
    : helloworldari_private.rc SMARTWEE.rc $(WINDRES) -
      i helloworldari_private.rc - F pe - i386-- input -
      format = rc - o helloworldari_private.res - O coff

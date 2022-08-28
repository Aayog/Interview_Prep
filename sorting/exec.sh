if [ "$1" == '' ]
then
    echo "Filename is empty"
    echo "Usage: $0 [CPP file]"
    echo "Example: $0 hello"
    echo "Here, the filename is hello.cpp ~~omit the .cpp~~"
else
    g++ -o$1.exe $1.cpp
    ./$1.exe
    rm ./$1.exe
fi
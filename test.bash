clear

g++ --std=c++17 $1

./a.out < input.txt

diff --color=always output.txt <(./a.out < input.txt)
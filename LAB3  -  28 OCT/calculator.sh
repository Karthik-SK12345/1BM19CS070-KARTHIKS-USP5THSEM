echo "Enter 2 Numbers : "
read a b
echo "\n1.Add \n 2.Subtract \n 3.Multiplication \n 4.DIvision \n 5.Modulo \n"
read op
case $op in
1) echo `expr $a + $b`;;
2) echo `expr $a - $b`;;
3) echo `expr $a \* $b`;;
4) echo `expr $a / $b`;;
5) echo `expr $a % $b`;;
*) echo "Improper Choice"

esac



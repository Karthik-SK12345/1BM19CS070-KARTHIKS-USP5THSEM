
echo  "Enter Num1: "
read num1
echo "Enter Num2: "
read num2
echo "Enter Num3: "
read num3
if test $num1 -gt $num2 -a  $num1 -gt $num3 
then 
echo  "$num1 is greatest"
elif test $num2 -gt $num1 -a  $num3 -gt $num1
then
echo "$num2 is greatest"
else 
echo "$num3 is greatest"
fi


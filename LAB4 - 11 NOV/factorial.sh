echo "Enter a Number"
read num
i=1
fact=1
while [ $i -le $num ] 
do
   fact=`expr $i \* $fact`
   i=`expr $i + 1`
done
   echo "Factorial = $fact"

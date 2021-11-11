echo "Enter a Number"
read num
i=1
sum=0
while [ $i -le $num ] 
do 
sum=`expr $i + $sum`
i=`expr $i + 1`
done
echo "The Sum of N Natural Numbers = $sum"

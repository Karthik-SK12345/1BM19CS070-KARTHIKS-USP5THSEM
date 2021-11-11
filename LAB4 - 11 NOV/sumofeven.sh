echo "Enter a Number"
read num
i=2
sum=0
while [ $i -le $num ] 
do 
sum=`expr $i + $sum`
i=`expr $i + 2`
done
echo "The Sum of Even Numbers = $sum"

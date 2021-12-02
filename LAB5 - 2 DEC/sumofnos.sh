echo "Enter a num to begin with -1 to terminate "
read n
sum=0
while [ $n -ne -1 ]
do
sum=`expr $sum + $n`
echo "Sum = $sum"
echo "Enter a number, -1 to terminate "
read n
done
echo "Final sum = $sum"

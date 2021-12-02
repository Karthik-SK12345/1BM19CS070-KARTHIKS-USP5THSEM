echo "Enter 2 Numbers m and n to find (m^n) : "
read m n
i=1
pow=1
if [ $m -eq 0 ] 
then 
   echo "0"
elif [ $n -eq 0 ] 
then 
   echo "1"
else

while [ $i -le $n ]  
do 
    pow=`expr $pow \* $m`
    i=`expr $i + 1`
done
echo "Power of power($m,$n) = $pow"
fi

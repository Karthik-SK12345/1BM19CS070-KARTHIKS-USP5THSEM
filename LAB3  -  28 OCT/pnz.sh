echo "+VE , -VE AND 0 CHECKER"
echo "Enter a Number : "
read num
if [ $num -eq 0 ] 
then 
   echo "Number is Zero"
elif [ $num -gt 0 ] 
then
   echo "Number is +ve"
else
   echo "Number is -ve"
fi

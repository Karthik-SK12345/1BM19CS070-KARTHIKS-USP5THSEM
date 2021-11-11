echo "Enter the Temperature in Fahrenheit"
read temp
v1=`expr $temp-32`
v2=`echo " $v1 * 5 / 9"|bc`
echo "Temperature in Celsius = $v2"


echo "Enter a string"
read st
len=`echo $st | wc -c`
i=1
nov=0
while [ $i -le $len ]
do
v=`echo $st|cut -c $i`
case "$v" in
a|A|e|E|i|I|o|O|u|U) nov=`expr $nov + 1`;;
esac
i=`expr $i + 1`
done
echo "NO of vowels in $st = $nov"

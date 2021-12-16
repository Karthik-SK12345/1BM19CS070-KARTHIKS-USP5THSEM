echo "Enter a File Name : "
read fn
if [ -r $fn ]
then    
        echo "Number of characters = `wc -c $fn|cut -d" " -f1`"
        echo "Number of words = `wc -w $fn|cut -d" " -f1`"
        echo "Number of lines = `wc -l $fn|cut -d" " -f1`"
else    
        echo "FIle doesnt exist"
fi   

NAME=$1

if [ -z "$NAME" ]; then
	echo "No name has been given"
	exit 1
fi

HEADER="${NAME}.hpp"
FILE="${NAME}.cpp"

echo -n "#ifndef " >> $HEADER
echo "${NAME}_hpp" | tr a-z A-Z >> $HEADER
echo -n "# define " >> $HEADER
echo "${NAME}_hpp" | tr a-z A-Z >> $HEADER
echo >> $HEADER
echo "class	${NAME}" >> $HEADER
echo "{" >> $HEADER
echo "	private:" >> $HEADER
echo "		/*class vars*/" >> $HEADER
echo "	public:" >> $HEADER

echo "		${NAME}();" >> $HEADER
echo "		~${NAME}();" >> $HEADER
echo "		${NAME}(const ${NAME} &copy);" >> $HEADER
echo "		${NAME}&	operator=(const ${NAME}& copy);" >> $HEADER

echo "};" >> $HEADER
echo >> $HEADER
echo "#endif" >> $HEADER

echo "#include /"$HEADER/"" >> $FILE
echo >> $FILE
echo "${NAME}::${NAME}():" >> $FILE
echo "	/*initiate varables*/" >> $FILE
echo "{}" >> $FILE
echo >> $FILE

echo "${NAME}::~${NAME}():" >> $FILE
echo "{}" >> $FILE
echo >> $FILE

echo "${NAME}::${NAME}(const ${NAME} &copy)" >> $FILE
echo "{" >> $FILE
echo "	*this = copy;" >> $FILE
echo "}" >> $FILE
echo >> $FILE

echo "${NAME}&	${NAME}::operator=(const ${NAME} &copy)" >> $FILE
echo "{" >> $FILE
echo "	if (this != &copy)" >> $FILE
echo "		{" >> $FILE
echo "			/*val = copy.val;*/" >> $FILE
echo "		}" >> $FILE
echo "	return *this;" >> $FILE
echo "}" >> $FILE
echo >> $FILE


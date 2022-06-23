g++ make.cpp -o make
g++ try.cpp -o try
g++ go.cpp -o go
while true
do
	./make > 1.in
	./try < 1.in > 1.ans
	./go < 1.in > 1.out
	if diff 1.out 1.ans
	then
		echo "AC"
	else
		exit 0
	fi
done

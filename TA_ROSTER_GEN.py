from lib.pds_file_op import pull
tas=pull('test.txt')
tas+=tas

for i in range(2):
    with open('schedule.txt','a+') as f:
        l=i%8
        ta_assigned=tas[l:l+3]
        s=[f"L{i+2}_Q{k+1} - {j}" for k,j in enumerate(ta_assigned)]
        f.write("\n".join(s)+"\n\n\n")
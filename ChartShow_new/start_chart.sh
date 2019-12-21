#!/bin/sh

# if program not started do start
#panel types (constants):
#cd /work/imitator/Im_Tr/
#cd /home/Alive/Volga/Im_Tr/

#parameters (variable):
#ip_out=10.160.249.135
ip_out=59.0.0.11
#port_read=7014
port_read_dn=7111
port_write=5002
port_upk=8401
my_x=0#5
my_y=0#5
port_read_osc=5001
port_upk_read=8400

#my_w=1024
#my_h=768
my_w=1280
my_h=1024
#my_w=1600
#my_h=1200
#my_width=496
#my_height=590

perevorot=0

cur_page=2  # 1 - show oscill, 0 - show DN , 2  - show both

./ChartShow_new  $my_x $my_y $my_w $my_h $ip_out $port_write $port_upk $port_read_dn $port_read_osc $port_upk_read $cur_page $perevorot #&


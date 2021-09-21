from z3 import *
bufArray = [Int("buf{}".format(i)) for i in range(9)]
s = Solver()
s.add(bufArray[0]*4778+bufArray[1]*3659+bufArray[2]*9011+bufArray[3]*5734+bufArray[4]*4076+bufArray[5]*6812+bufArray[6]*8341+bufArray[7]*6765+bufArray[8]*7435==5711942)
s.add(bufArray[0]*4449+bufArray[1]*5454+bufArray[2]*4459+bufArray[3]*5800+bufArray[4]*6685+bufArray[5]*6120+bufArray[6]*7357+bufArray[7]*3561+bufArray[8]*5199==4885863)
s.add(bufArray[0]*3188+bufArray[1]*6278+bufArray[2]*9411+bufArray[3]*5760+bufArray[4]*9909+bufArray[5]*7618+bufArray[6]*7184+bufArray[7]*4791+bufArray[8]*8686==6387690)
s.add(bufArray[0]*8827+bufArray[1]*7419+bufArray[2]*7033+bufArray[3]*9306+bufArray[4]*7300+bufArray[5]*5774+bufArray[6]*6588+bufArray[7]*5541+bufArray[8]*4628==6077067)
s.add(bufArray[0]*5707+bufArray[1]*5793+bufArray[2]*4589+bufArray[3]*6679+bufArray[4]*3972+bufArray[5]*5876+bufArray[6]*6668+bufArray[7]*5951+bufArray[8]*9569==5492294)
s.add(bufArray[0]*9685+bufArray[1]*7370+bufArray[2]*4648+bufArray[3]*7230+bufArray[4]*9614+bufArray[5]*9979+bufArray[6]*8309+bufArray[7]*9631+bufArray[8]*9272==7562511)
s.add(bufArray[0]*6955+bufArray[1]*8567+bufArray[2]*7949+bufArray[3]*8699+bufArray[4]*3284+bufArray[5]*6647+bufArray[6]*3175+bufArray[7]*8506+bufArray[8]*6552==5970432)
s.add(bufArray[0]*4323+bufArray[1]*4706+bufArray[2]*8081+bufArray[3]*7900+bufArray[4]*4862+bufArray[5]*9544+bufArray[6]*5211+bufArray[7]*7443+bufArray[8]*5676==5834523)
s.add(bufArray[0]*3022+bufArray[1]*8999+bufArray[2]*5058+bufArray[3]*4529+bufArray[4]*3940+bufArray[5]*4279+bufArray[6]*4606+bufArray[7]*3428+bufArray[8]*8889==4681110)
print(s.check())
print(s.model())
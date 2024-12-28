import random
def user_input():
    temp = input("Choose 'O' or ' X' :")
    if temp in mark:
        return temp
    else:
        print("Input valid character. ")
        return user_input()
    
def display_board():
    print("   C1  C2  C3")
    for i in range(3):
        print('R', i+1 , sep = '', end = '')
        for j in range(3):
            print('',Board[i][j] , end = '')
            if j != 2:
                print(' |', end = '')
            else:
                print("")
        if i != 2:
            print("  -----------")

def user_turn():
    user_input = input("Enter the row and column")
    i = int(user_input[0])
    j = int(user_input[-1])
    
    
    if i in range(1,4) and j in range(1,4):
        if Board[i-1][j-1] == ' ':
            Board[i-1][j-1] = user_mark
        else:
            print("Input valid row and column")
            user_turn()
    else:
        print("Input valid row and column")
        user_turn()
        
def easy_level():
    i1 = random.randint(0,2)
    j1 = random.randint(0,2)
    
    if Board[i1-1][j1-1] == ' ':
        Board[i1-1][j1-1] = computer_mark
    else:
        easy_level()
        
def check_row():
    global rcount
    for i in Board:
        rcount = 0
        r = []
        for j in range(3):
            if i[j] == user_mark:
                r.append(1)
                rcount += 1
            else:
                r.append(0)
                   
def check_col():
    global ccount
    for i in range(3):
        ccount = 0
        c = []
        for j in range(3):
            if Board[j][i] == user_mark:
                c.append(1)
                ccount += 1
            else:
                c.append(0)
        
def check_diag():
        global dcount, d1count
        dcount = 0
        d1count = 0
        d = []
        d1 = []
        for i in range(3):
            if Board[i][i] == user_mark:
                dcount += 1
                d.append(1)
            else:
                d.append(0)
            if Board[2-i][i] == user_mark:
                d1count += 1
                d1.append(1)
            else:
                d1.append(0)
        return [d,d1]            
    
    
    
def medium_level():
    if Board[1][1] == ' ':
        Board[1][1] = computer_mark
        return 0
        
    l = check_row()
    if rcount == 2:
        
        for k in range(3):
            if l[0][k] == 0:
                j = k
                break
        for k in range(3):
            if Board[k] == l[-1]:
                i = k
                break
        if Board[i][j] == ' ':
            Board[i][j] = computer_mark
            return 0
    
    l1 = check_col()
    if ccount == 2:
        
        for k in range(3):
            if l1[0][k] == 0:
                i = k
                break
        j = l1[-1]
        if Board[i][j] == ' ':
            Board[i][j] = computer_mark
            return 0
        
    m = check_diag()
    if dcount == 2 :
        i = 0
        for k in range(3):
            if m[0][k] == 0:
                i = k
                break
        if Board[i][i] == ' ':
            Board[i][i] = computer_mark    
            return 0
    if d1count == 2 :
        i = 0
        for k in range(3):
            if m[-1][k] == 0:
                i = k
                break
        if Board[2-i][i] == ' ':
            Board[2-i][i] = computer_mark    
            return 0   
    
    else:
        easy_level() 
     
    
def hard_level():
    print("Under construction!!!")

def computer_turn():
    if level == 1:
        easy_level()
    elif level == 2:
        medium_level()
    else:
        hard_level()
        
        
def winning_cond():
    global user_win
    global computer_win
    user_win = False
    computer_win = False
    
    for i in range(3):
        if (Board[i][0] == user_mark and Board[i][1] == user_mark and Board[i][2] == user_mark) or (Board[0][i] == user_mark and Board[1][i] == user_mark and Board[2][i] == user_mark):
            user_win = True
            break
        elif (Board[i][0] == computer_mark and Board[i][1] == computer_mark and Board[i][2] == computer_mark) or (Board[0][i] == computer_mark and Board[1][i] == computer_mark and Board[2][i] == computer_mark):
            computer_win = True
            break
    if (Board[0][0] == user_mark and Board[1][1] == user_mark and Board[2][2] == user_mark) or (Board[2][0] == user_mark and Board[1][1] == user_mark and Board[0][2] == user_mark):
        user_win = True  
    elif (Board[0][0] == computer_mark and Board[1][1] == computer_mark and Board[2][2] == computer_mark) or (Board[2][0] == computer_mark and Board[1][1] == computer_mark and Board[0][2] == computer_mark) :
        computer_win = True           
            

def game():
    moves = 0
    while moves <= 9:
        print("Yours Turn: ")
        moves += 1
        user_turn()
        display_board()
        winning_cond()
        if user_win == True:
            print("Congratulations you have won the game")
            exit()
        if moves == 9:
            print("The game is tied.")
            exit()
        
        print("Computer's Turn: ")
        moves += 1
        computer_turn()
        display_board()
        winning_cond()
        if computer_win == True:
            print("Better luck next time. Computer has won the game")
            exit()
        
        

mark = ('O' , 'X')
print("""Hello, Welcome to the Tic-Tac-Toe game !!!
         This is a single-player game where computer will be your opponent.
         Here are some important rules to follow:
         1) Enter Capital o <O> for zero and Capital x <X> for cross.
         2) Inorder to make your move, enter valid row number (1, 2 or 3) followed by a valid column number(1, 2 or 3).
         3) If the row number or column number is invalid then chance will be given to correct it.
         4) Once marked you cannot change it.
     """)

user_mark = user_input()
print("You choose:",user_mark)

computer_mark = mark[0] if user_mark == 'X' else mark[1]
print("Computer:", computer_mark)

level = int(input("""Choose the difficulty level:
                     1. Enter 1 for easy
                     2. Enter 2 for medium
                     3. Enter 3 for hard 
                 """))
if level == 3:
    hard_level()
    exit()
print("You choosed:",level)

R1 = [' ',' ',' ']
R2 = [' ',' ',' ']
R3 = [' ',' ',' ']
Board = [R1,R2,R3]

rcount = 0
ccount = 0
dcount = 0
d1count = 0

game()

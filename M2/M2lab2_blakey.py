# M2Lab2 
# Mikayla Blakey
# Goal: Learn how to use Turtle
# 02/5/2025


from turtle import *

screen = Screen()
screen.bgcolor("pink")

t = Turtle()
t.pencolor("red")
t.pensize(5)
#below is a hexagon
'''
t.forward(100)
t.right(50)
t.forward(100)
t.right(75)
t.forward(100)
t.right(55)
t.forward(100)
t.right(50)
t.forward(100)
t.right(75)
t.forward(100)
'''

#this is a loop for a hexagon
'''
for side in (1,2,3,4,5,6):
    t.forward(100)
    t.right(60)
'''    
#bottom of special s
t.left(90)
t.forward(100)
t.right(90)
t.penup()
t.forward(50)
t.pendown()
t.right(90)
t.forward(100)
t.left(90)
t.penup()
t.forward(50)
t.pendown()
t.left(90)
t.forward(100)
#top of special s
t.penup()
t.forward(50)
t.pendown()
t.forward(100)
t.left(90)
t.penup()
t.forward(50)
t.left(90)
t.pendown()
t.forward(100)
t.penup()
t.right(90)
t.forward(50)
t.pendown()
t.right(90)
t.forward(100)
#triangle on top
t.right(45)
t.forward(70)
t.right(90)
t.forward(72)
t.penup()
#connecting first line in between
t.right(45)
t.forward(99)
t.pendown()
t.right(45)
t.forward(71)
t.right(45)
#connecting second line
t.penup()
t.right(90)
t.forward(51)
t.left(135)
t.pendown()
t.forward(72)
#connecting point to s
t.penup()
t.right(135)
t.forward(49)
t.right(27)
t.pendown()
t.forward(112)
#going to finish the bottom
t.penup()
t.goto(0,0)
t.right(107)
t.pendown()
t.forward(72)
t.left(90)
t.forward(71)
#make final connection
t.left(45)
t.penup()
t.forward(100)
t.pendown()
t.left(153)
t.forward(110)
t.penup()
t.forward(200)
Turtle.fillcolor("red")

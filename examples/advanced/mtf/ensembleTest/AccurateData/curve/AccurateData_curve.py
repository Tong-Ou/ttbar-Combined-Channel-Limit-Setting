# -*- coding: utf-8 -*-
"""
Created on Sat Sep  9 21:47:09 2017

"""

import numpy as np
import cv2

"""import figure"""
img = cv2.imread('paperresult.png')

"""select points"""
#select points with certain color:
data1i=[]  #for saving pixel coordinates
data1j=[]
for j in range(img.shape[1]):
    for i in range(img.shape[0]):
        if img[i,j,0]==1 and img[i,j,1]==0 and img[i,j,2]==0:#distinguished by RGB
            """B"""             """G"""             """R"""
            data1i.append(i)
            data1j.append(j)
#select the middlemost point along i-axis for each j
#to make that one j for one point:
data2i=[]
data2j=[]
j=0
while(j<len(data1j)):
    jtmp=j
    while(data1j[j]==data1j[jtmp]):
        j=j+1
        if j>=len(data1j):
            break
    n=int((jtmp+j-1)/2)
    data2i.append(data1i[n])  
    data2j.append(data1j[n])
                                       
"""coordinate transformation"""
#transform pixel coordinates into real coordinates
data3x=[]
data3y=[]
leftbottomx=1.75
leftbottomy=1E-3
righttopx=5.0
righttopy=1E4
for t in range(len(data2j)):
    '''
    #linear coordinate
    x=leftbottomx+(righttopx-leftbottomx)/(img.shape[1]-1)*(data2j[t]-0)
    '''
    #logarithmic coordinate
    x=10**(np.log10(leftbottomx)+(np.log10(righttopx)-np.log10(leftbottomx))/(img.shape[1]-1)*(data2j[t]-0))
    """
    #linear coordinate
    y=leftbottomy+(righttopy-leftbottomy)/(img.shape[0]-1)*(img.shape[0]-1-data2i[t])
    """
    #logarithmic coordinate
    y=10**(np.log10(leftbottomy)+(np.log10(righttopy)-np.log10(leftbottomy))/(img.shape[0]-1)*(img.shape[0]-1-data2i[t]))
    
    data3x.append(x)
    data3y.append(y)
    
"""export data"""
fname = open('./paperresult.txt', 'w')
for t in range(len(data3x)):
   line=str(data3x[t])+'	'+str(data3y[t])+'\n' 
   fname.write(line)
fname.close()            

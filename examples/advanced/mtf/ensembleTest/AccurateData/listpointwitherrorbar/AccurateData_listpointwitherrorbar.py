# -*- coding: utf-8 -*-
"""
Created on Sat Sep  9 21:47:09 2017

"""

import numpy as np
import cv2

"""import figure"""
img = cv2.imread('AMS2016.PNG')

"""select points"""
#select points with certain color:
data1i=[]  #for saving pixel coordinates
data1j=[]
for j in range(img.shape[1]):
    for i in range(img.shape[0]):
        if img[i,j,0]==0 and img[i,j,1]==0 and img[i,j,2]==255:#distinguished by RGB
            """B"""             """G"""             """R"""
            data1i.append(i)
            data1j.append(j)
#select the middlemost point along i-axis for each j
#to make that one j for one point:
data2i=[]
data2j=[]
ivariance=[]
k=0
while(k<len(data1j)):
    ktmp=k
    while(data1j[k]==data1j[ktmp]):
        k=k+1
        if k>=len(data1j):
            break
    n=int((ktmp+k-1)/2)
    data2i.append(data1i[n])  
    data2j.append(data1j[n])
    ivariance.append(k-ktmp)
#select the points with local maximum ivariance
data3i=[]
data3j=[]
error3=[]
k=1
while(k<len(ivariance)):
    ktmp1=0
    ktmp2=0
    while(ivariance[k]>=ivariance[k-1]):
        if(ivariance[k]>ivariance[k-1]):
            ktmp1=k        
        k=k+1
        if k>=len(data2j):
            break
    ktmp2=k
    n=int((ktmp1+ktmp2-1)/2)
    data3i.append(data2i[n])  
    data3j.append(data2j[n])
    error3.append(ivariance[n]/2)
    while(ivariance[k]<=ivariance[k-1]):
        k=k+1
        if k>=len(data2j):
            break    
                                
"""coordinate transformation"""
#transform pixel coordinates into real coordinates
data4x=[]
data4y=[]
error4y=[]
leftbottomx=0.5
leftbottomy=0.0
righttopx=1000.0
righttopy=27.0
for t in range(len(data3j)):
    #linear coordinate
    """
    x=leftbottomx+(righttopx-leftbottomx)/(img.shape[1]-1)*(data3j[t]-0)
    """
    #logarithmic coordinate
    x=10**(np.log10(leftbottomx)+(np.log10(righttopx)-np.log10(leftbottomx))/(img.shape[1]-1)*(data3j[t]-0))
    #linear coordinate
    y=leftbottomy+(righttopy-leftbottomy)/(img.shape[0]-1)*(img.shape[0]-1-data3i[t])
    """
    #logarithmic coordinate
    y=10**(np.log10(leftbottomy)+(np.log10(righttopy)-np.log10(leftbottomy))/(img.shape[0]-1)*(img.shape[0]-1-data3i[t]))
    """
    errory=(righttopy-leftbottomy)/(img.shape[0]-1)*error3[t]
    data4x.append(x)
    data4y.append(y)
    error4y.append(errory)
    
"""export data"""
fname = open('./AMS2016_positronflux.txt', 'w')
for t in range(len(data4x)):
   line=str(data4x[t])+'	'+str(data4y[t])+'   '+str(error4y[t])+'\n' 
   fname.write(line)
fname.close()            

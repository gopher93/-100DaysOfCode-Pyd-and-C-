# -*- coding: utf-8 -*-
"""
Created on Wed Feb 20 13:34:28 2019

@author: kpickrel

Edge detection OPENCV

"""

import cv2
import numpy as np
from matplotlib import pyplot as plt


img = cv2.imread('C:\opencv\sources\samples\python2\data\messi.jpg',0)



for i in range(0,1500,100):
    edges = cv2.Canny(img,0,i)
    
    plt.figure(figsize=(20,10))
    plt.subplot(121), plt.imshow(img, cmap = 'gray')
    plt.title('Original Image'), plt.xticks([]), plt.yticks([])
    
    plt.subplot(122), plt.imshow(edges, cmap = 'gray')
    plt.title('Edge Image'), plt.xticks([]), plt.yticks([])
# -*- coding: utf-8 -*-
"""
Kane Pickrel
Feb 22 2019
Day4-2DFilter OPENCV
"""

import cv2
import numpy as np
from matplotlib import pyplot as plt

img = cv2.imread('C:\opencv\sources\samples\python2\data\logo.PNG')

kernal = np.ones((5,5), np.float32)/25

dst = cv2.filter2D(img,-1,kernal)

plt.subplot(121), plt.imshow(img), plt.title('Original')
plt.xticks([]), plt.yticks([])

plt.subplot(122), plt.imshow(dst), plt.title('Filtered')
plt.xticks([]), plt.yticks([])



import numpy as np
import matplotlib.pyplot as plt 
import pandas as pd
dataset = pd.read_csv('')
X = dataset.iloc[:, 0:3].values 
y = dataset.iloc[:, -1].values
from sklearn.impute import SimpleImpute
sim = SimpleImputer()
sim.fit(X[:, 0:2])
X[:, 0:2] = sim.transform(X[:, 0:2])
from sklearn.preprocessing import LabelEncoder 
lab = LabelEncoder()
X[:, 2] = lab.fit_transform(X[:, 2]) 
lab.classes_
y = lab.fit_transform(y)
from sklearn.preprocessing import OneHotEncoder 
one = OneHotEncoder(categorical_features = [2]) 
X = one.fit_transform(X)
X = X.toarray()
from sklearn.preprocessing import StandardScaler 
sc = StandardScaler()
X = sc.fit_transform(X)
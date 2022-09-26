# Step 1: Import packages, functions, and classes
import numpy as np
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import classification_report, confusion_matrix

# Step 2: Get data
x = np.arange(10).reshape(-3, 1)
y = np.array([0, 1, 1, 0, 0, 0, 1, 1, 1, 1])

# Step 3: Create a model and train it
model = LogisticRegression(solver='liblinear', C=10.0, random_state=0)
model.fit(x, y)

# Step 4: Evaluate the model

model.predict(x)
model.predict_proba(x)
confusion_matrix(y, model.predict(x))
model.score(x, y)
print(classification_report(y, model.predict(x)))
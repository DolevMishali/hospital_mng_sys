<p align="center"> 
  <img src="https://user-images.githubusercontent.com/102062869/196044905-e0d571de-da3e-4d4d-940b-7b06bb79557a.png" alt="HAR Logo" width="500px" height="500px">
</p>
<h1 align="center"> Hospital Management System </h1>
<h3 align="center"> A customizable, comprehensive, and integrated Hospital Management System designed to manage all hospital operations. </h3>  

</br>

<p align="center"> 
  <img src="images/Signal.gif" alt="Sample signal" width="70%" height="70%">
</p>

![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)

<!-- ABOUT THE PROJECT -->
<h2 id="about-the-project"> :pencil: About The Project</h2>

<p align="justify"> 
  This project aims to classify human activities using data obtained from accelerometer and gyroscope sensors from phone and watch. The raw data will be preprocessed using two
  different approaches such as topological data analysis and statistical features extraction from segmented time series. The goal is to compare and evaluate the performance of
  different classifiers (Decision Tree, k Nearest Neighbors, Random Forest, SVM and CNN) which are trained on the two sets of preprocessed data.
</p>

<p align="center">
  <img src="images/WISDM Activities.png" alt="Table1: 18 Activities" width="70%" height="70%">        
  <!--figcaption>Caption goes here</figcaption-->
</p>

![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)

<!-- PREREQUISITES -->
<h2 id="prerequisites"> :fork_and_knife: Prerequisites</h2>

[![made-with-cpp](https://img.shields.io/badge/Made%20With-C%2B%2B17-success)](https://en.cppreference.com) <br>
[![maintainer](https://img.shields.io/badge/Maintainer-DolevMishali-blueviolet)](https://www.linkedin.com/in/dolevmishali343/) <br>

<!--This project is written in Python programming language. <br>-->
The following open source packages are used in this project:
* Numpy
* Pandas
* Matplotlib
* Scikit-Learn
* Scikit-tda
* Giotto-tda
* TensorFlow
* Keras

![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)

<!-- DATASET -->
<h2 id="dataset"> :floppy_disk: Dataset</h2>
<p> 
  The WISDM (Wireless Sensor Data Mining) dataset includes raw time-series data collected from accelerometer and gyroscope sensors of a smartphone and smartwatch with their corresponding labels for each activity. The sensor data was collected at a rate of 20 Hz (i.e., every 50ms). Weiss et.al., collected this dataset from 51 subjects who performed 18 different activities listed in Table 2, each for 3 minutes, while having the smartphone in their right pant pocket and wearing the smartwatch in their dominant hand. Each line of the time-series sensor file is considered as input.

<p align="center">
  <img src="images/Human Activity.gif" alt="Human Activity.gif" display="inline-block" width="60%" height="50%">
</p>


 _The WISDM dataset is publicly available. Please refer to the [Link](https://archive.ics.uci.edu/ml/datasets/WISDM+Smartphone+and+Smartwatch+Activity+and+Biometrics+Dataset+)_ 

  The following table shows the 18 activities represented in data set.
</p>

<p align="center">
  <img src="images/Activity Table.png" alt="Table1: 18 Activities" width="45%" height="45%">
</p>

![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)

<!-- TOPOLOGICAL FEATURE -->
<h2 id="topological-feature"> :large_blue_diamond: Topological feature</h2>

<p align="justify"> 
  Topological data analysis provides various techniques toexplore the topological properties and shape of the data.
  Since time series sensor data obtained from performing an activity may have topological properties, we tried extracting features using the topology of the data and perform the classification task on those features. For a given time segment we explore the topology of each segment using persistence diagram generated via persistence homology. Persistent homology can be created through filtrations such as Vietoris- Rips, SparseRips, Cubical Persistence etc., on the data and capture the growth, birth, and death of different topological features across dimensions (e.g., components, tunnels, voids) [2]. One of the main challenges in computing the persistent homology is finding the appropriate filtration for the time segments. In total 18 topological features where extracted for each time segment.
</p>

<!-- EXPERIMENTS -->
<!--<h2 id="experiments"> :microscope: Experiments</h2>-->

![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)

<!-- RESULTS AND DISCUSSION -->
<h2 id="results-and-discussion"> :mag: Results and Discussion</h2>

<p align="justify">
  The overall accuracy score of personal and impersonal models are shown in the following tables. Some of the results we observed are similar to the results obtained by Weiss et.al and they are discussed below: <br>
</p>
<p align="justify">
<ul>
  <li>
    Since accelerometers senses acceleration based on vibration which can be more prominent during an activity and gyroscope only senses rotational changes, accelerometers outperformed gyroscope in all our models. <br>
  </li>
  <li>
    As the style of performing an activity differs from each person, it is difficult to aggregate those features among all subjects. So our personal models vastly outperformed our impersonal models.
  </li>
  <li>
    It is also observed that non hand-oriented activities are classified better with sensors from smartphone and handoriented activities are classified better with sensors from smartwatch. Refer appendix for activity wise recall scores. Some key take-aways based on our results are listed below:
  </li>
  <li>
    CNN trained on raw sensor data performed better for personal models, however it performed poorly on impersonal models.
  </li>
</ul>
</p>

<p align="center">
  <img src="images/Personal and Impersonal Table.png" alt="Table 3 and 4" width="75%" height="75%">
</p>

![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)

<!-- REFERENCES -->
<h2 id="references"> :books: References</h2>

<ul>
  <li>
    <p>Matthew B. Kennel, Reggie Brown, and Henry D. I. Abarbanel. Determining embedding dimension for phase-space reconstruction using a geometrical construction. Phys. Rev. A, 45:3403–3411, Mar 1992.
    </p>
  </li>
  <li>
    <p>
      L. M. Seversky, S. Davis, and M. Berger. On time-series topological data analysis: New data and opportunities. In 2016 IEEE Conference on Computer Vision and Pattern Recognition Workshops (CVPRW), pages 1014–1022, 2016.
    </p>
  </li>
  <li>
    <p>
      Floris Takens. Detecting strange attractors in turbulence. In David Rand and Lai-Sang Young, editors, Dynamical Systems and Turbulence, Warwick 1980, pages 366–381, Berlin, Heidelberg, 1981. Springer Berlin Heidelberg.
    </p>
  </li>
  <li>
    <p>
      Guillaume Tauzin, Umberto Lupo, Lewis Tunstall, Julian Burella P´erez, Matteo Caorsi, Anibal Medina-Mardones, Alberto Dassatti, and Kathryn Hess. giotto-tda: A topological data analysis toolkit for machine learning and data exploration, 2020.
    </p>
  </li>
  <li>
    <p>
      G. M. Weiss and A. E. O’Neill. Smartphone and smartwatchbased activity recognition. Jul 2019.
    </p>
  </li>
  <li>
    <p>
      G. M. Weiss, K. Yoneda, and T. Hayajneh. Smartphone and smartwatch-based biometrics using activities of daily living. IEEE Access, 7:133190–133202, 2019.
    </p>
  </li>
  <li>
    <p>
      Jian-Bo Yang, Nguyen Nhut, Phyo San, Xiaoli li, and Priyadarsini Shonali. Deep convolutional neural networks on multichannel time series for human activity recognition. IJCAI, 07 2015.
    </p>
  </li>
</ul>

![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)

<!-- CONTRIBUTORS -->
<h2 id="contributors"> :scroll: Contributors</h2>

<p>
  :mortar_board: <i>All participants in this project are students in the Department of Computer Engineering Ruppin Academic Center</i> <br> <br>

  :man: <b>Dolev Mishali</b> <br>
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Email: <a>Dolevmi2010@gmail.com</a> <br>
  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; GitHub: <a href="https://github.com/DolevMishali">@DolevMishali</a> <br>
</p>

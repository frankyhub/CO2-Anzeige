# CO2-Anzeige
CCS811 Sensor und GC9A01 Display

<a name="oben"></a>

<div align="center">

|[:skull:ISSUE](https://github.com/frankyhub/CO2-Anzeige/issues?q=is%3Aissue)|[:speech_balloon: Forum /Discussion](https://github.com/frankyhub/CO2-Anzeige/discussions)|[:grey_question:WiKi](https://github.com/frankyhub/CO2-Anzeige/wiki)||
|--|--|--|--|
| | | | |
|![Static Badge](https://img.shields.io/badge/RepoNr.:-%20112-blue)|<a href="https://github.com/frankyhub/CO2-Anzeige/issues">![GitHub issues](https://img.shields.io/github/issues/frankyhub/CO2-Anzeige)![GitHub closed issues](https://img.shields.io/github/issues-closed/frankyhub/CO2-Anzeige)|<a href="https://github.com/frankyhub/CO2-Anzeige/discussions">![GitHub Discussions](https://img.shields.io/github/discussions/frankyhub/CO2-Anzeige)|<a href="https://github.com/frankyhub/CO2-Anzeige/releases">![GitHub release (with filter)](https://img.shields.io/github/v/release/frankyhub/CO2-Anzeige)|
|![GitHub Created At](https://img.shields.io/github/created-at/frankyhub/CO2-Anzeige)| <a href="https://github.com/frankyhub/CO2-Anzeige/pulse" alt="Activity"><img src="https://img.shields.io/github/commit-activity/m/badges/shields" />| <a href="https://github.com/frankyhub/CO2-Anzeige/graphs/traffic"><img alt="ViewCount" src="https://views.whatilearened.today/views/github/frankyhub/github-clone-count-badge.svg">  |<a href="https://github.com/frankyhub?tab=stars"> ![GitHub User's stars](https://img.shields.io/github/stars/frankyhub)|

</div>

## Story
Das Repo bescheibt ein Projekt das den CO2-Wert der Luft und flüchtige organische Verbindungen (TVOCs) in der Umwelt misst und anzeigt. Als Anzeige verwende ich das runde 1,28-Zoll-Display GC9A01 und als Controller dient ein Ardoino UNO.

<div align="center">
  
![Bild](pic/display.png)

</div>

## Verdrahtung


|UNO|Display|Sensor|
|--|--|--|
|3,3V|VCC|VCC|
|GND|GND|GND|
|13|SCL|-|
|11|SDA|-|
|7|DC|-|
|10|CS|-|
|8|RST|-|
|SCL|-|SCL|
|SDA|-|SDA|
|--|--|--|


![Bild](pic/UNO.png)


</div>



---

<div style="position:absolute; left:2cm; ">   
<ol class="breadcrumb" style="border-top: 2px solid black;border-bottom:2px solid black; height: 45px; width: 900px;"> <p align="center"><a href="#oben">nach oben</a></p></ol>
</div>

# ProgAlap Környezetek

*Porgramozás Alapjai 1 & 2 tárgyakhoz előkészített különböző fejlesztési környezetek, amik a könnyű, alapvetően kevés háttérismeretet igénylő fejlesztést és debuggolást teszik lehetővé.*

- [Motiváció](#motiváció)
- [Hogyan használd](#hogyan-használd)
- [Hibajelzés és javítás](#hibajelzés-és-javítás)

## Motiváció

[Ha tényleg csak a használata érdekel, nyugodtan ugord át.](#hogyan-használd)

Mivel Prog1-2 tárgyakból a fejlesztői alkalmazások kiajánlása mindig is nagyon liberálisan ment (*vagy pont, hogy konzervatívan, nézőpont kérdése, \*khm hkm CodeBlocks\**), régóta foglalkoztat, hogy hogyan is tudnék azzal besegíteni, hogy a friss hallgatók valami egységes, könnyen kezelhető, de mégis teljesértékű környezettel találják szembe magukat.

Lévén, hogy az elmúlt időszakban egészen sokat interaktáltam dockerrel, jött is az ihlet, hogy ez pontosan egy olyan probléma, amit ez a technológia - illetve bizonyos VS Code bővítmények - könnyen kezelnének. Ilyenformán egy modern, közkedvelt és könnyen bővíthető fejlesztői környezetbe lehete ágyazni a ProgAlapok tárgyak labor- (és házi-) feladatait, mely mind a programok egyszerű fordítására, linkelésére, futtatására, de még debuggolására is lehetőséget nyújt. Teszem hozzá, teszik mindezt amellett, hogy az előkészített környezetekbe nem kell belenyúlni.

Mindezek mellett szinte kötelező jelleggel említem meg, hogy a C (*illetve C++*) fordítóval kellő intim viszonyt ápolni nagyon alaposan ajánlott (*preprocesszor, fordítás lépései, linkelési szakasz, dinamikus könyvtárak csatolása; ha ebben szerepelt új kifejezés, tessék nekifeküdni*), de akár ezen ismerkedés előtt - vagy után is, ha már maguk a szükséges ismeretek megvannak - egy sablon környezet kifejezetten hasznos eszköz tud lenni.

Így jutunk el ehhez a projekthez, amit mindenkinek nyugodtan ajánlok, legyen teljesen kezdő, vagy tapasztalt róka. Előbbieknek olyan eszközöket nyújt, amiket azért csak kellő munkával tudnának maguktól összerakni. Utóbbiakat pedig kifejezetten arra invitálom, hogy segítsék a projektet tudásukkal, hogy a fiatalságnak minél jobb legyen.

## Hogyan használd

### Előkészületek

- **Visual Studio Code:**

  A projekt kifejezetten a Visual Studio Code környezethez készült, ezen kívül nem is nagyon hasznosítható. Ezt az alábbi linkről tudod letölteni: <https://code.visualstudio.com/>.

  Az installer futtatásán túl nem kéne, hogy több dolgod legyen vele. Mindenképpen töltsd le, és indítsd el.

- **Dev Containers bővítmény:**

  Ha az előző lépéssel megvagy, az alábbi bővítményt kell hozzáadnod: <https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers>.
  
  Ha ez nem sikerül, VS Code-ból a bővítmények (*Extensions*, `Ctrl + Shift + X`) panelon találod. Innen a következőre keress rá: `Dev Containers`, és kattints az `Install` gombra. Ennek automatikusan le kéne futnia.

- **Git:**

  Mindezek után az alábbira lesz még szükséged: <https://git-scm.com/downloads>.

  Ez teszi lehetővé, hogy a projektben előkészített környezeteket le tudd tölteni a saját gépredre. A verziókezelés bugyraiba most nem is tervezek belemenni, de hidd el, rengeteg sok minden más miatt is hasznos lesz még, ha ezt itt és most letöltöd, és egyelőre csak hagyod létezni a gépeden.

Ha ezekkel mind megvagy, a pontos használatukat minden környezet saját példaága bemutatja, ezekre később találsz hivatkozásokat.

### Egy-kattintásos környezet

> Kifejezetten a félév elején hasznos, hogy ameddig csak egy forrsáfájlba dolgoztok (nevezzük ezt most `main.c`-nek), addig csak ezt az egy fájlt le tudjátok fordítani, futtatni és debuggolni. Az egy-kattintásos (*oneclick*) környezett ezért is lett összerakva, két külön módon is ezt a funkcionalitást támogatja. Debuggolásra kifejezetten nagy hangsúlyt szeretnék fektetni, mert ez a programozásnak egy borzasztóan fontos eleme, azonban a részeltek között mindig elveszik - ez a projekt is igazából azért jött létre, hogy ezt segítse. Több leírást és kifejtést, hogy a debuggolást hogyan végezzétek, [a példaághoz tartozó README-ben találtok](https://github.com/itsthatMatthew/progalap-kornyezetek/blob/oneclick-example/README.md).

Ha csak magát az egy-kattintásos környezetet szeretnétek elérni, azt az alábbi linken megtehetitek: <https://github.com/itsthatMatthew/progalap-kornyezetek/tree/oneclick>. Illetve az éppen kiválasztott mappába lemásolhatjátok a konficurációs fájlokat a következő paranccsal:

```sh
git clone --single-branch -b oneclick https://github.com/itsthatMatthew/progalapkornyezetek .
```

Ha viszont egy olyan példaprojekt érdekel, ahol a környezet használata is ki van fejtve és be van mutatva, azt az alábbi linken éritek el: <https://github.com/itsthatMatthew/progalap-kornyezetek/tree/oneclick-example>. Ezt kiinduló projektként következő paranccsal tudjátok lemásolni:

```sh
git clone --single-branch -b oneclick-example https://github.com/itsthatMatthew/progalapkornyezetek egykattintasos-peldaprojekt
```

### CMake - komplexebb projektekhez

> Összetett, többforrásos projektek csapdája, hogy a tisztességes fordításuk C és C++ nyelvekkel kifejezetten körülményes. Erre az évek során számtalan megoldás készült, itt most CMake van eszközként segítségül véve. Többforásos projekt lehet egy összetettebb labor, de különösképpen az infós nagyházi is, ahol adott elvárás, hogy a kód több forrás- és fejlécfájlra legyen tagolva. Ezek fordítására, futtatására és debuggolására ez a környezet mind fel van készítve. Amennyiben több információ érdekel a CMake, illetve a környezet használatáról, [azt a példaághoz tartozó README-ben találtok](https://github.com/itsthatMatthew/progalap-kornyezetek/blob/cmake-example/README.md).

Ha csak magát a CMake környezetet szeretnétek elérni, azt az alábbi linken megtehetitek: <https://github.com/itsthatMatthew/progalap-kornyezetek/tree/cmake>. Illetve az éppen kiválasztott mappába lemásolhatjátok a konficurációs fájlokat a következő paranccsal:

```sh
git clone --single-branch -b cmake https://github.com/itsthatMatthew/progalapkornyezetek .
```

Ha viszont egy olyan példaprojekt érdekel, ahol a környezet használata is ki van fejtve és be van mutatva, azt az alábbi linken éritek el: <https://github.com/itsthatMatthew/progalap-kornyezetek/tree/cmake-example>. Ezt kiinduló projektként következő paranccsal tudjátok lemásolni:

```sh
git clone --single-branch -b cmake-example https://github.com/itsthatMatthew/progalapkornyezetek cmake-peldaprojekt
```

## Hibajelzés és javítás

Amennyiben hibát tapasztalnál, azt jelentsd [itt githubon](https://github.com/itsthatMatthew/progalap-kornyezetek/issues/new?template=hiba.md).

Ha szívesen beledolgoznál valami újdonságot a repóba, nyugodtan forkold és majd jöhet a PR. Mindent a saját branchén tarts, ha pedig ezen túlmutató igényed lenne, azt kérlek jegyezd be [megtárgyalni](https://github.com/itsthatMatthew/progalap-kornyezetek/discussions), vagy nyiss előtte rá egy [issuet fejlesztésként](https://github.com/itsthatMatthew/progalap-kornyezetek/issues/new?template=fejleszt%C3%A9s.md) (van megfelelő label).

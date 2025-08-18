# ProgAlap Környezetek

*Porgramozás Alapjai 1 & 2 tárgyakhoz előkészített különböző fejlesztési környezetek, amik a könnyű, alapvetően kevés háttérismeretet igénylő fejlesztést és debuggolást teszik lehetővé.*

- [Motiváció](#motiváció)
- [Hogyan használd](#hogyan-használd)
- [Hibajelzés és javítás](#hibajelzés-és-javítás)

## Motiváció

[Ha tényleg csak a használata érdekel, nyugodtan ugord át.](#hogyan-használd)

Mivel Prog1-2 tárgyakból a fejlesztői alkalmazások kiajánlása mindig is nagyon liberálisan ment (*vagy pont, hogy konzervatívan, nézőpont kérdése, \*khm hkm CodeBlocks\**), régóta foglalkoztat, hogy hogyan is tudnék azzal besegíteni, hogy a friss hallgatók valami egységes, könnyen kezelhető, de mégis teljesértékű környezettel találják szembe magukat.

Lévén, hogy az elmúlt időszakban egészen sokat interraktáltam dockerrel, jött is az ihlet, hogy ez pontosan egy olyan probléma, amit ez a technológia - illetve bizonyos VS Code bővítmények - könnyen kezelnének. Ilyenformán egy modern, közkedvelt és könnyen bővíthető fejlesztői környezetbe lehete ágyazni a ProgAlapok tárgyak labor- (és házi-) feladatait, mely mind a programok egyszerű fordítására, linkelésére, futtatására, de még debuggolására is lehetőséget nyújt. Teszem hozzá, teszik mindezt amellett, hogy az előkészített környezetekbe nem is kell belenyúlni.

Mindezek mellett szinte kötelező jelleggel említem meg, hogy a C (*illetve C++*) fordítóval kellő intim viszonyt ápolni nagyon alaposan ajánlott (*prepocesszor, fordítási fázis, linkelés lépései, dinamikus könyvtárak csatolása; ha ebben szerepelt új kifejezés, tessék nekifeküdni*), de akár ezen ismerkedés előtt - vagy utána is, ha már maguk a szükséges ismeretek megvannak - egy sablon környezet kifejezetten hasznos eszköz tud lenni.

Így jutunk el ehhez a projekthez, amit mindenkinek nyugodtan ajánlok, legyen teljesen kezdő, vagy tapasztalt róka. Előbbieknek olyan eszközöket nyújt, amiket azért csak kellő munkával tudnának maguktól összerakni. Utóbbiakat pedig kifejezetten arra invitálom, hogy segítség a projektet tudásukkal, hogy a fiatalságnak minél jobb legyen.

## Hogyan használd

### Előkészületek

- **Visual Studio Code**
A projekt kifejezetten a Visual Studio Code környezethez készült, ezen kívül nem is nagyon hasznosítható. Ezt az alábbi linkről tudod letölteni: <https://code.visualstudio.com/>
Az installer futtatásán túl nem kéne, hogy több dolgod legyen vele. Mindenképpen töltsd le, és indítsd el.

- **Dev Containers bővítmény**
Ha az előző lépéssel megvagy, az alábbi bővítményt kell hozzáadnod: <https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers>
Ha ez nem sikerül, VS Code-ból a bővítmények (*Extensions*, `Ctrl + Shift + X`) panelon találod. Innen a következőre keress rá: `Dev Containers`, és kattints az `Install` gombra. Ennek automatikusan le kéne futnia.

- **Git**
Mindezek után az alábbira lesz még szükséged: <https://git-scm.com/downloads>
Ez teszi lehetővé, hogy a projektben előkészített környezeteket le tudd tölteni a saját gépredre. A verziókezelés bugyraiba most nem is tervezek belemenni, de hidd el, rengeteg sok minden más miatt is hasznos lesz még, ha ezt itt és most letöltöd.

### "Egy-kattintásos" környezet

Alapág: <https://github.com/itsthatMatthew/progalap-kornyezetek/tree/oneclick>

Másold az éppen kiválasztott mappába következő paranccsal:

```sh
git clone --single-branch -b oneclick https://github.com/itsthatMatthew/progalap-kornyezetek .
```

Példakóddal: <https://github.com/itsthatMatthew/progalap-kornyezetek/tree/oneclick-example>

Másold le kiinduló projektként következő paranccsal:

```sh
git clone --single-branch -b oneclick-example https://github.com/itsthatMatthew/progalap-kornyezetek
```

### CMake - komplexebb projektekhez

Alapág: <https://github.com/itsthatMatthew/progalap-kornyezetek/tree/cmake>

Másold az éppen kiválasztott mappába következő paranccsal:

```sh
git clone --single-branch -b cmake https://github.com/itsthatMatthew/progalap-kornyezetek .
```

Példakóddal: <https://github.com/itsthatMatthew/progalap-kornyezetek/tree/cmake-example>

Másold le kiinduló projektként következő paranccsal:

```sh
git clone --single-branch -b cmake-example https://github.com/itsthatMatthew/progalap-kornyezetek
```

## Hibajelzés és javítás

Amennyiben hibát tapasztalnál, azt jelentsd [itt githubon](https://github.com/itsthatMatthew/progalap-kornyezetek/issues/new).

Ha szívesen beledolgoznál valami újdonságot a repóba, nyugodtan forkold és majd jöhet a PR. Mindent a saját branchén tarts, ha pedig ezen túlmutató igényed lenne, arra nyiss előtte egy issuet kérlek megtárgyalni (van megfelelő label).
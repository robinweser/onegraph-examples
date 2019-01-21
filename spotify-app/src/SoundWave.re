open Emotion;

let soundWaveWrapper = [%css
  [
    width(`px(50)),
    height(`px(50)),
    padding(`px(2)),
    transform(`rotate(`deg(180.))),
  ]
];

let soundCol = [%css [flexShrink(1.), overflow(`hidden)]];

/*Top to bottom*/
let swing1 =
  keyframes([
    (0, [height(`pct(100.))]),
    (25, [height(`pct(82.))]),
    (50, [height(`pct(75.))]),
    (75, [height(`pct(53.))]),
    (100, [height(`pct(40.))]),
  ]);

/*Bottom to Top*/
let swing2 =
  keyframes([
    (0, [height(`pct(50.))]),
    (25, [height(`pct(65.))]),
    (50, [height(`pct(75.))]),
    (75, [height(`pct(88.))]),
    (100, [height(`pct(100.))]),
  ]);

/*Top to bottom to top*/
let swing3 =
  keyframes([
    (0, [height(`pct(75.))]),
    (25, [height(`pct(53.))]),
    (50, [height(`pct(45.))]),
    (75, [height(`pct(78.))]),
    (100, [height(`pct(100.))]),
  ]);

let col1Animation = [%css
  [
    animationName(swing1),
    animationDuration(`ms(300)),
    animationIterationCount(`infinite),
    animationDirection(`alternate),
  ]
];

let col2Animation = [%css
  [
    animationName(swing2),
    animationDuration(`ms(300)),
    animationIterationCount(`infinite),
    animationDirection(`alternate),
  ]
];

let col3Animation = [%css
  [
    animationName(swing3),
    animationDuration(`ms(600)),
    animationIterationCount(`infinite),
    animationDirection(`alternate),
  ]
];

let soundBlock = [%css
  [
    backgroundColor(`hex("fff")),
    height(`px(3)),
    width(`px(14)),
    margin(`px(2)),
    borderStyle(`none),
  ]
];

let green = [%css [backgroundColor(`hex("7ED321"))]];

let yellow = [%css [backgroundColor(`hex("F5E223"))]];

let red = [%css [backgroundColor(`hex("D0021B"))]];

let component = ReasonReact.statelessComponent("SoundWave");

let make = (~isPlaying, _children) => {
  ...component,
  render: _self =>
    ReasonReact.(
      <div>
        <div
          className={
            Cn.make([
              soundWaveWrapper,
              SharedCss.flexWrapper(~justify=`center, ~align=`flexStart),
            ])
          }>
          <div className={Cn.make([soundCol, col1Animation])}>
            <div className={Cn.make([green, soundBlock])} />
            <div className={Cn.make([green, soundBlock])} />
            <div className={Cn.make([green, soundBlock])} />
            <div className={Cn.make([green, soundBlock])} />
            <div className={Cn.make([yellow, soundBlock])} />
            <div className={Cn.make([yellow, soundBlock])} />
            <div className={Cn.make([red, soundBlock])} />
            <div className={Cn.make([red, soundBlock])} />
          </div>
          <div className={Cn.make([soundCol, col2Animation])}>
            <div className={Cn.make([green, soundBlock])} />
            <div className={Cn.make([green, soundBlock])} />
            <div className={Cn.make([green, soundBlock])} />
            <div className={Cn.make([green, soundBlock])} />
            <div className={Cn.make([yellow, soundBlock])} />
            <div className={Cn.make([yellow, soundBlock])} />
            <div className={Cn.make([red, soundBlock])} />
            <div className={Cn.make([red, soundBlock])} />
          </div>
          <div className={Cn.make([soundCol, col3Animation])}>
            <div className={Cn.make([green, soundBlock])} />
            <div className={Cn.make([green, soundBlock])} />
            <div className={Cn.make([green, soundBlock])} />
            <div className={Cn.make([green, soundBlock])} />
            <div className={Cn.make([yellow, soundBlock])} />
            <div className={Cn.make([yellow, soundBlock])} />
            <div className={Cn.make([red, soundBlock])} />
            <div className={Cn.make([red, soundBlock])} />
          </div>
        </div>
      </div>
    ),
};
